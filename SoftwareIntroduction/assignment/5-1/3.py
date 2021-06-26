words = input().split()
words_dic = {}

for word in words:
    if word in words_dic.keys():
        words_dic[word] += 1
    else:
        words_dic[word] = 1

for word in words_dic.keys():
    print(word+": "+str(words_dic[word]))