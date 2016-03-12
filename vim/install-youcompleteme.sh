# /bin/bash

#after copy .vim and .vimrc install youcompleteme
#https://github.com/Valloric/YouCompleteMe

echo "Install essentials"
sudo apt-get install build-essential cmake
sudo apt-get install python-dev python3-dev
cd ~/.vim/bundle
git clone https://github.com/Valloric/YouCompleteMe.git
cd YouCompleteMe
git submodule update --init --recursive
./install.py --clang-completer
