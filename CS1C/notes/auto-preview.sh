#!/bin/bash
ls *.md | entr pandoc notes.md -o notes.pdf --toc --toc-depth=3 --number-sections --listings