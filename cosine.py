from collections import defaultdict
import math as mt

def count_words(file):
    word_count=defaultdict(int)
    with open(file,'r') as f:
        words=f.read().split()
        for word in words:
            word_count[word]+=1  #Count occurrences
    return word_count

a=count_words('file1.txt')  
b=count_words('file2.txt')  

vocab=set(a.keys()).union(set(b.keys()))

count_a={}  #Dictionary for file1 word counts
count_b={}  #Dictionary for file2 word counts

for word in vocab:
    if word in a:
        count_a[word]=a[word]
    else:
        count_a[word]=0

    if word in b:
        count_b[word]=b[word]
    else:
        count_b[word]=0

print(count_a)
print(count_b)

def dot_product(x,y):
    dp=0.0
    for key in x:
        if key in y:  #multiply common keys
            dp += x[key] * y[key]
    return dp

def magnitude(x):
    sum=0.0
    for key in x.values():
        sum+=key*key
    return mt.sqrt(sum)

cosine=dot_product(count_a,count_b)/(magnitude(count_a)*magnitude(count_b))
print(cosine)