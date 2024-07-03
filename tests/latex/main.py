from latextool_basic import graph
print(r'''
\begin{center}
%s
\end{center}
''' % graph(yscale=1.5, layout='''
 C
D E
  F
H G I
  J
''',
minimum_size='8mm',
edges='C>D,C>E,E>F,F>G,F>H,F>I,G>J',
A=r"label=$$",
B=r'label=$$',
C=r'label=$$',
D=r'label=$\texttt{*}$',
E=r'label=$\texttt{}$',
F=r'label=$\texttt{}$',
G=r'label=$\texttt{*}$',
H=r'label=$\texttt{*}$',
I=r'label=$\texttt{*}$',
J=r'label=$\texttt{*}$',
edge_label={('A','B'):{'label':r'\texttt{c}'},
('C','D'):{'label':r'\texttt{a}', 'style':'pos=0.8,above,inner sep=3mm,circle'},
('C','E'):{'label':r'\texttt{c}'},
('E','F'):{'label':r'\texttt{a}'},
('F','G'):{'label':r'\texttt{n}'},
('F','H'):{'label':r'\texttt{b}', 'style':'pos=0.5,above,inner sep=1mm,circle'},
('F','I'):{'label':r'\texttt{t}', 'style':'pos=0.5,above,inner sep=1mm,circle'},
('G','J'):{'label':r'\texttt{e}'},
},
))

