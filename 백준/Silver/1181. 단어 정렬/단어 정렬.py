Max=input()
WordList=list()
for _ in range(int(Max)):
    Word=input()
    WordList.append(Word)
WordList=sorted(set(WordList),key=lambda x:(len(x),x))    
print("\n".join(WordList))        