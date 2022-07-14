
print("hello")
x = 20
a = x.bit_length()
print(a)
dir(x)
b = x.__pow__(4)
print(b)
ynwa = ["you", "will", "never", "walk", "alone"] 
print(ynwa[:-1])
for index,word in enumerate(ynwa):
    print(index, word)
MLB_team = {
     'Colorado' : 'Rockies',
     'Boston'   : 'Red Sox',
     'Minnesota': 'Twins',
     'Milwaukee': 'Brewers',
     'Seattle'  : 'Mariners'
 }
print(MLB_team['Boston']) 
print(MLB_team.get('TA', 'bibi'))
for k in MLB_team.items():
    print(k[0])

s = (1, 4, 'a')
print(type(s))
a = 400
b = a
b = 300
print(a)
print(b)