#!/bin/bash


echo "pdlinux repo-add"
#repo-add -s -n -R pdlinux_repo.db.tar.gz *.pkg.tar.zst
repo-add -n -R pdlinux_repo.db.tar.gz *.pkg.tar.zst

sleep 1


echo "####################################"
echo "Repo Updated!!"
echo "####################################"
