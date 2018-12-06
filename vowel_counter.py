def main():
	num_vowels("aeiou")

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
	print("The word or phrase '{}' has {} vowels.".format(text, vowels))

if __name__ == "__main__":
	main()