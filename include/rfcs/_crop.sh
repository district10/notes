#!/bin/bash

PDF=$(basename $1)
PDF="${PDF%.*}"

OUTDIR="../cropped_rfcs"
echo Processing ${PDF}...

gswin64c \
-o ${OUTDIR}/${PDF}.pdf \
-sDEVICE=pdfwrite \
-c "[/CropBox [24 158.4 465.4 791.6]" \
-c " /PAGES pdfmark" \
-f ${PDF}.pdf