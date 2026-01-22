// 函数: sub_43f000
// 地址: 0x43f000
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_476a80(*data_4ac2fc)
uint32_t eax_3
eax_3.b = *(data_4ab0a8 + 0x1d) ^ 1
char temp1 = eax_3.b
eax_3.b = neg.b(eax_3.b)
return sbb.d(eax_3, eax_3, temp1 != 0)
