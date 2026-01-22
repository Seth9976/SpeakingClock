// 函数: sub_404014
// 地址: 0x404014
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

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
