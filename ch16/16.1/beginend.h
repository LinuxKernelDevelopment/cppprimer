template<class Ary, unsigned N>
Ary begin(Ary ary)
{
	return ary;
}

template<class Ary, unsigned N>
Ary end(Ary ary)
{
	return &ary[N];
}
