# LCG-RandomGenerator
The famous LCG random generator and also a new script to fix the disadvantage of the LCG random Generator algorithm

A linear congruential generator (LCG) is an algorithm that yields a sequence of pseudo-randomized numbers calculated with a discontinuous piecewise linear equation. The method represents one of the oldest and best-known pseudorandom number generator algorithms. The theory behind them is relatively easy to understand, and they are easily implemented and fast, especially on computer hardware which can provide modulo arithmetic by storage-bit truncation.

A benefit of LCGs is that with appropriate choice of parameters, the period is known and long. Although not the only criterion, too short a period is a fatal flaw in a pseudorandom number generator.

Although LCGs have a few specific weaknesses, many of their flaws come from having too small a state. The fact that people have been lulled for so many years into using them with such small moduli can be seen as a testament to strength of the technique. A LCG with large enough state can pass even stringent statistical tests; a modulo-2 LCG which returns the high 32 bits passes TestU01's SmallCrush suite,[citation needed] and a 96-bit LCG passes the most stringent BigCrush suite.

One flaw specific to LCGs is that, if used to choose points in an n-dimensional space, the points will lie on, at most, n√n!⋅m hyperplanes (Marsaglia's Theorem, developed by George Marsaglia). This is due to serial correlation between successive values of the sequence Xn. Carelessly chosen multipliers will usually have far fewer, widely spaced planes, which can lead to problems. The spectral test, which is a simple test of an LCG's quality, measures this spacing and allows a good multiplier to be chosen.

As you see in the below spectral test there are plans which be unchosen and missed out.
![Lcg_3d](https://user-images.githubusercontent.com/13776994/58165713-94393e80-7c9d-11e9-9470-af33f3fd8cb0.gif)

<img width="637" alt="Screen Shot 1398-02-22 at 16 30 50" src="https://user-images.githubusercontent.com/13776994/58165353-d746e200-7c9c-11e9-8f4d-2f5229c46f3a.png">

While the Modefied LCG radnom generator method is a solution to fill this gaps and cover the hole 3-Dimentional space.
![ModefiedLCG](https://user-images.githubusercontent.com/13776994/58165515-2f7de400-7c9d-11e9-8007-47813f22f699.png)

