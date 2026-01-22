// 函数: sub_405380
// 地址: 0x405380
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebx = arg1
int32_t i_1 = arg2
BSTR bstrString
int32_t i

do
    bstrString = *ebx
    
    if (bstrString != 0)
        *ebx = 0
        bstrString = SysFreeString(bstrString)
    
    ebx = &ebx[1]
    i = i_1
    i_1 -= 1
while (i != 1)
return bstrString
