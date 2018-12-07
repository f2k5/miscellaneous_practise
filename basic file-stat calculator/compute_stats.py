import fileinput

def compute_stats (date1, date2):
	high = 0
	low = 10000
	total_volume = 0
	x = 0
	for line in fileinput.input():
		line = line.split()
		if int(line[0]) >= int(date1) and int(line[0]) <= int(date2):
			if float(line[2]) > high:
				high = float(line[2])
			if float(line[3]) < low:
				low = float(line[3])
			total_volume += int(line[5])
			x += 1

	total_volume = int(total_volume / x)

	print("Highest: {}".format(high))
	print("Lowest: {}".format(low))
	print("total_volume : {}".format(total_volume))

compute_stats("20130311", "20130313")
