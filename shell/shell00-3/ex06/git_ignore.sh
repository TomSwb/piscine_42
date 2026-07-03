#!/bin/bash

git status --ignored --porcelain | grep '!!' | cut -c 4-
