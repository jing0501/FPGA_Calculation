void mul(int a,int b,int& c,int& d,int& e,int& f)
{
#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS INTERFACE s_axilite port=a
#pragma HLS INTERFACE s_axilite port=b
#pragma HLS INTERFACE s_axilite port=c
#pragma HLS INTERFACE s_axilite port=d
#pragma HLS INTERFACE s_axilite port=e
#pragma HLS INTERFACE s_axilite port=f
c = a + b;
d = a - b;
e = a * b;
f = a / b;

}
