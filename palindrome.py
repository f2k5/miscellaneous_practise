#simple palindrome checker
#assumptions: only lower caps, texts may have comma's or spaces

def main():
	palindrome("was it a rat is saw")

def palindrome (text):
	#remove any possible comma's:
	x = text.split(",")
	#print(x)
	#rejoin after removing comma's:
	x = "".join(x)
	#remove any possible spaces:
	x = x.split()
	#rejoin after removing spaces:
	x = "".join(x)
	#print(x)

	#if length of x is an even number:
	if (len(x)) % 2 == 0:
		l =  int(len(x)/ 2)
	else:
		l = len(x) - 1
		l = int(l / 2)
	y = len(x) - 1
	i = 0

	while l != 0:
		if x[i] == x[y]:
			i += 1
			y -= 1

			if i == l:
				print("The word {} is a palindrome.".format(text))
				break
		else:
			print("The word {} is not a palindrome.".format(text))
			break

if __name__ == "__main__":
	main()
