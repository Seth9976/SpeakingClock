// 函数: sub_49b060
// 地址: 0x49b060
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if ((*(*arg1 + 0x17c))() == 0)
    return sub_499ec8(arg3, arg2)

int32_t* esi_1 = sub_4983e0(arg1, arg2, arg3)

if (sub_45714c(arg1) != arg1[0x12])
    int32_t eax_6 = sub_45714c(arg1)
    int32_t edx_3 = arg1[0x12] - eax_6
    int32_t edx_4 = edx_3 s>> 1
    bool c_1 = unimplemented  {sar edx, 0x1}
    
    if (edx_3 s>> 1 s< 0)
        edx_4 = adc.d(edx_4, 0, c_1)
    
    *esi_1 += edx_4

int32_t result = sub_457190(arg1)

if (result != arg1[0x13])
    result = sub_457190(arg1)
    int32_t edx_6 = arg1[0x13] - result
    int32_t edx_7 = edx_6 s>> 1
    bool c_2 = unimplemented  {sar edx, 0x1}
    
    if (edx_6 s>> 1 s< 0)
        edx_7 = adc.d(edx_7, 0, c_2)
    
    esi_1[1] += edx_7

return result
