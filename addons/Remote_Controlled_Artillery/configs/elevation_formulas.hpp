/*
	Math Section,
	trying to find the best formulas for required gun elevation.
*/

Low Trajectory:

HE = higher elevation
LE = lower elevation 
RD = range difference

THED = tables higher elevation difference
TLED = tables lower elevation difference
ED = elevation difference

HE - (0.RD * (HE - LE)) - (-TLED - ((-THED - -TLED ) * 0.RD) * 0.ELD)
665 - (0.31 * (665 - 699)) - (-36 + (-41 - -36) * 0.31) * 0.52)  =  695  =  perfect hit

For formula simplyfy website:
https://www.symbolab.com/solver/equation-calculator/simplify%20A-%5Cleft(%5Cleft(%5Cfrac%7BC%7D%7B100%7D%5Cright)%5Ccdot%20%20%5Cleft(A-B%5Cright)%5Cright)-%5Cleft(-E-%5Cleft(%5Cleft(-D--E%5Cright)%5Ccdot%20%5Cleft(%5Cfrac%7BF%7D%7B100%7D%5Cright)%5Cright)%5Ccdot%20%5Cleft(%5Cfrac%7BG%7D%7B100%7D%5Cright)%5Cright)?or=input

A = higher elevation
B = lower elevation 
C = range difference

D = tables higher elevation difference
E = tables lower elevation difference
F = elevation difference

A - ((F/100) * (A - B)) - (-E - ((-D - -E) * (F/100)) * (G/100))

A-\left(\left(\frac{C}{100}\right)\cdot \:\left(A-B\right)\right)-\left(-E-\left(\left(-D--E\right)\cdot \left(\frac{F}{100}\right)\right)\cdot \left(\frac{G}{100}\right)\right)

simplyfied:

A - C*(A-B)/100 + E + (-D+E)*F*G/10000
