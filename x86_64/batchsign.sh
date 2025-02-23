#!/bin/bash

for i in $1*.zst
do
  gpg --detach-sig "$i"
done
