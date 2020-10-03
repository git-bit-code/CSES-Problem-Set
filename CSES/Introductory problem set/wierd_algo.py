# Defined function for weired Algorithm
def weired(n):
	
  # res is the resulting list of all the values n during the algorithm  
	res = [str(n)]

	# used while loop to check the condition when n gets equal to 1
	# could also be done by using recursion
	while n!= 1:
		
    # Checking first condition if n is even or not
		if n%2==0:
			
      # If n is even then divide it by 2
			# and appeding the result to the res list
			n = n//2
			res.append(str(n))
		
    # Otherwise if n is not even
		else:
			
      # If n odd then multiply it with 3 and add 1
			# and apppending the result to the res list 
			n = n*3 + 1
			res.append(str(n))
	
  # Finally returning the resulting list
	# with the help of join method
	return " ".join(res)


# Taking input
n = int(input())

# Calling Function
print(weired(n))
