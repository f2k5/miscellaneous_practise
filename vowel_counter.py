def main():
	list = "The antelope and the aardvark fell in love"
	list = list.split()
	#print(list)
	new_list = []
	for i in list:
		if num_vowels(i) < 3:
			new_list.append(i)
	print(new_list)	

def num_vowels(text):
	vowels = 0
	for x in text:
		if x == "a" or x == "A":
			vowels += 1
		elif x == "e" or x == "E":
			vowels += 1
		elif x == "i" or x == "I":
			vowels += 1
		elif x == "o" or x == "O":
			vowels += 1
		elif x == "u" or x == "U":
			vowels += 1
	return vowels

if __name__ == "__main__":
	main()