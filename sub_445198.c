// 函数: sub_445198
// 地址: 0x445198
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

RECT rect
GetWindowRect(arg1, &rect)
int32_t* edx = *(*data_4ac2fc + 0x44)
void* ebx

if (edx == 0)
    ebx = sub_4740e4(*data_4ac4b8, 0)
else
    int32_t* eax_4 = *(*data_4ac4b8 + 0x6c)
    
    if (eax_4 == 0)
        ebx = sub_46f710(edx)
    else
        data_4ac4b8
        ebx = sub_46f710(eax_4)

int32_t eax_12 = sub_473dc4(ebx)
int32_t eax_17
int32_t edx_2
edx_2:eax_17 = sx.q(sub_473da8(ebx) - rect.bottom + rect.top)
int32_t eax_20 = sub_473d90(ebx)
int32_t eax_24 = sub_473ddc(ebx) - rect.right + rect.left
int32_t eax_25 = eax_24 s>> 1
bool c = unimplemented  {sar eax, 0x1}

if (eax_24 s>> 1 s< 0)
    eax_25 = adc.d(eax_25, 0, c)

return SetWindowPos(arg1, nullptr, eax_20 + eax_25, eax_12 + divs.dp.d(edx_2:eax_17, 3), 0, 0, 0x15)
