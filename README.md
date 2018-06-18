# Inventory-Planning-15-11
# Problem:
The Rinky Dink Company makes machines that resurface ice rinks. The demand for such products varies from month to month, and so the 
company needs to develop a strategy to plan its manufacturing given the ﬂuctuating, but predictable, demand. The company wishes to 
design a plan for the next n months. For each month i, the company knows the demand di, that is, the number of machines that it will sell. 
Let D DPn iD1 di be the total demand over the next n months. The company keeps a full-time staff who provide labor to manufacture up to m 
machines per month. If the company needs to make more than m machines in a given month, it can hire additional, part-time labor, at a cost 
that works out to c dollars per machine. Furthermore, if, at the end of a month, the company is holding any unsold machines, it must pay 
inventory costs. The cost for holding j machines is given as a function h(j) for j = 1,2,...,D, where h(j) > 0 for 1 < j < D and h(j) < 
h(j+1) for 1 < j < D - 1. 
Give an algorithm that calculates a plan for the company that minimizes its costs while fulﬁlling all the demand. 
The running time should be polyomial in n and D.

#Solution:
The code attached is coded in C++ programming language.
