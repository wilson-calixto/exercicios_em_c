"------------------------------------------------------------------------------
" basico
"
set sw=4 ts=4 st=4
set et si ai       
set number         " linhas numeradas
set ruler          " mostra numero da linha e coluna
syntax enable
set encoding=utf-8
set visualbell     " desliga alerta sonoro
set noerrorbells
set history=1000
set autoread
set mouse=a        " habilita o mouse

"------------------------------------------------------------------------------
" edicao
"
set showmatch      " Show matching brackets
"set matchtime=5    " bracket blinking
set showcmd        " show incomplete commands in lower right hand corner
set showmode
set hidden         " current buffer can be put to the background without writing to disk
set cursorline
filetype indent on

" folds
set foldmethod=indent
set foldnestmax=3
set nofoldenable
set wildmenu

"------------------------------------------------------------------------------
" searching
"
set hlsearch   " highlight searches
set incsearch  " incremental searching
set ignorecase " searches are case insensitive
set smartcase  " unless there is one capital letter

" scrolling
set scrolloff=5
set sidescrolloff=5
set sidescroll=1

"------------------------------------------------------------------------------
" backup & swap
"
set noswapfile
set nobackup
set nowb

"persistent undo
"silent !mkdir ~/.vim/backups > /dev/null 2>&1
"set undodir=~/.vim/backups
"set undofile

" colorscheme
colorscheme blue

"------------------------------------------------------------------------------
" Pathogen load
" filetype off " Makes syntax non-working on office box
call pathogen#infect()
call pathogen#helptags()

" All-modes shortcut helper function
fu! KeyMap(key, action, insert_mode)
  execute "noremap  <silent> " . a:key . " " . a:action . "<CR>"
  execute "vnoremap <silent> " . a:key . " <C-C>" . a:action . "<CR>"
  if a:insert_mode
    execute "inoremap <silent> " . a:key . " <C-O>" . a:action . "<CR>"
  endif
endfu

"c.vim
filetype plugin on
let  g:C_UseTool_cmake    = 'yes' 
let  g:C_UseTool_doxygen = 'yes'

"Configurações recomendadas pelo Syntastic
set statusline+=%#warningmsg#
set statusline+=%{SyntasticStatuslineFlag()}
set statusline+=%*

let g:syntastic_always_populate_loc_list = 1
let g:syntastic_auto_loc_list = 1
let g:syntastic_check_on_open = 1
let g:syntastic_check_on_wq = 0

" Ctrl F11 open file tree
call KeyMap("<C-F11>", ":NERDTreeToggle", 1)

" Ctrl F10 :bp
call KeyMap("<C-F10>", ":bp", 1)

