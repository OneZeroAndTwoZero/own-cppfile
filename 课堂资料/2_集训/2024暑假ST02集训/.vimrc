set nu rnu
set mouse=a
set laststatus=2
set tabstop=4
set shiftwidth=4
set autoindent
set smartindent
set backspace=indent,eol,start

set timeoutlen=300
inoremap ( ()<esc>i
inoremap [ []<esc>i
inoremap { {}<esc>i
inoremap {<CR> {<CR>}<esc>O
inoremap ' ''<esc>i
inoremap " ""<esc>i

inoremap INIT #include<bits/stdc++.h><CR>using namespace std;<CR>#define F(i,l,r) for(int i=(l);i<=(r);++i)<CR>#define D(i,l,r) for(int i=(r);i>=(l);--i)<CR>#define MEM(x,a) memset(x,a,sizeof(x))<CR>int I(){int x=0,f=0;char c=getchar(); while(!isdigit(c))f=(c=='-'),c=getchar(); while(isdigit(c))x=x*10+c-'0',c=getchar(); return f?-x:x;}<CR><CR>void flandre()<CR>{<CR><CR>}<CR>#undef int<CR>int main()<CR>{<CR>flandre();<CR>return 0;<CR>}<CR>
inoremap DEFS #define vi vector<int><CR>#define eb emplace_back<CR>#define sz(x) ((int)x.size())<CR>#define al(x) x.begin(),x.end()<CR>#define pii pair<int,int><CR>#define fi first<CR>#define se second<CR>#define lwrb lower_bound<CR>#define uprb upper_bound<CR>

nnoremap <F8> :call Comp()<CR>
nnoremap <F9> :call CompZ()<CR>
nnoremap <C-A> ggVG
nnoremap <C-P> :call ToggleCmt()<CR>

function Comp()
	exec 'w'
	exec '! clear && g++ % -o %< && ./%<'
endfunc
function CompZ()
	exec 'w'
	exec '! clear && g++ % -o %< && ./%< < z'
endfunc
function ToggleCmt()
	:let s=getline('.')
	if(s[0]=='/' && s[1]=='/')
		exec 's/^\/\///g'
	else
		exec 's/^/\/\//g'
	endif
endfunc
