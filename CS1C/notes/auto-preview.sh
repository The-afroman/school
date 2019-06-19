#!/bin/bash
ls *.md | entr pandoc notes.md -o notes.pdf -T "CS1C Notes" --toc --toc-depth=3 --number-sections --listings --highlight-style=tango --include-in-header code.tex