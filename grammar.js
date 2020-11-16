module.exports = grammar({
    name: 'taskpaper',

    rules: {
        ///--- GRAMMAR ---///
        // A taskpaper document is a series of items.
        taskpaperDocument: $ => repeat($._item),

        // An item starts with optional indents followed by a project, task, or note.
        // An item ends with a newline preceded by optional white space.
        //item : {INDENT} (project | task | note) [WHITESPACE] NEWLINE ;
        _item: $ => seq(
            optional($._indent),
            choice(
                $.project,
                $.task,
            ),
            repeat($._whitespace),
            $._newline
        ),

        // A project starts with a project name (that ends in a colon).
        // A project line may optionally end with tags.
        project: $ => seq(
            $._projectName,
            optional($.tag)
        ),

        // A task starts with optional indents followed by a dash and white space.
        // Any text after that forms the content of the task.
        //task : {INDENT} TASK_OPEN WHITESPACE content ;
        task: $ => seq(
            $._taskOpen,
            $._whitespace,
            $._content,
        ),

        // A note starts with an optional indent followed by content.
        note: $ => seq(
            //optional($._indent),
            $._content
        ),

        // A tag starts with whitespace followed by the @ symbol and tag name.
        // A tag may end with an optional value enclosed in parentheses.
        tag: $ => seq(
            //$._whitespace,
            $._tagName,
            seq(
                $._valueOpen,
                $._value,
                $._valueClose
            )
        ),

        // Content is a series of tags and/or text.
        _content: $ => choice(
            $.tag,
            $.text
        ),

        ///--- TERMINAL TOKENS ---///
        // Project names are 0 or more non-colon characters terminated a colon.
        _projectName: $ => /[^:]*:/,

        // Tasks are indicated by starting with the special dash character.
        _taskOpen: $ => '-',

        // Tags names are the @ symbol followed by 0 or more non-tag-specific characters.
        _tagName: $ => /@[^@()]*/,

        // Parentheses enclose the value of a tag.
        _valueOpen: $ => '(',
        _valueClose: $ => ')',

        // The value can be anything except for the value close.
        // If the VALUE_CLOSE is escaped, it is treated as part of the value.
        _value: $ => /([^)]|(\\))*/,

        // Taskpaper only indents with tabs.
        _indent: $ => '\t',

        text: $ => /[^-{}+&@\n]+/,
        _whitespace: $ => /\s+/,
        _newline: $ => '/[\n]/',
  }
});
