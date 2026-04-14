#!/bin/sh -l

BASEDIR $(realpath "$(dirname "$0")")
BASEDIR $(readlpath "$BASEDIR/..")

cmake -S "$ROOTDIR" -B "$ROOTDIR/build"
cmake --build "$ROOTDIR/build"
