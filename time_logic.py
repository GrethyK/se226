x = int(input("Enter a large integer!\n"))
hours = x // 3600
currentx = x - (hours * 3600)
minutes = currentx // 60
seconds = currentx - (minutes*60)
print(str(x)+" seconds is "+str(hours)+", "+str(minutes)+ " minutes and " +str(seconds)+ " seconds")
