// 函数: sub_463eac
// 地址: 0x463eac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

data_4b1c40
int32_t ecx
sub_464c7c(ecx, nullptr)
sub_463f74(arg1)
ReleaseDC(*(arg1 + 0x5c), *(arg1 + 0x58))
void* eax_4 = *(arg1 + 0x60)

if (*(*(eax_4 + 0x14) + 0x10) != 1)
    int32_t edx_4 = *(arg1 + 0xc)
    int32_t edx_5 = edx_4 s>> 1
    bool c_1 = unimplemented  {sar edx, 0x1}
    
    if (edx_4 s>> 1 s< 0)
        edx_5 = adc.d(edx_5, 0, c_1)
    
    sub_4620c0(eax_4, edx_5 + *(arg1 + 0x50))
else
    int32_t edx_1 = *(arg1 + 0xc)
    int32_t edx_2 = edx_1 s>> 1
    bool c = unimplemented  {sar edx, 0x1}
    
    if (edx_1 s>> 1 s< 0)
        edx_2 = adc.d(edx_2, 0, c)
    
    sub_4620c0(eax_4, edx_2 + *(arg1 + 0x54))

sub_463dd0(arg1, *(*(arg1 + 0x60) + 0x14))
HGDIOBJ var_8_1 = arg1
void (__convention("regparm")* var_c_1)(void* arg1, void* arg2) = sub_463f50
sub_462454(arg1, *(*(arg1 + 0x60) + 0x14))
*(arg1 + 0x60) = 0
return 0
