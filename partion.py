
def partition2(n):
	l=[]
	for i in range(1,n):
		for j in range(i,n):
			if i+j==n:
				l.append((i,j))
	return l

def partition3(n):
	l=[]
	for i in range(1,n):
		for j in range(i,n):
			for k in range(j,n):
				if i+j+k==n:
					l.append((i,j,k))
	return l
	
def laststep(n,q,others):
	l=[]
	if sum(others)==n:
		l.append(others+(i,))
	return l
	
def descente(n,q,others=(1,)):
	l=[]
	if q==1:
		l=laststep(n,q,others)
	else:
		for i in range(others[-1],n):
			l+=descente(n,q-1,others+(q,))
	return l

print(descente(5,1))
