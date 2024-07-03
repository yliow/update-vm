import os
print("testing python ...")
try:
    import latextool_basic
    import latexcircuit
    import makemake
    import findgrep
    os.system('findgrep')
    os.system('makemake')
except Exception as e:
    print(">>>> ERROR")
    print(e)


