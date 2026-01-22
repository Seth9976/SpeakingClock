// 函数: sub_4119d4
// 地址: 0x4119d4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

VARIANT pvarg
VariantInit(&pvarg)
int32_t result
int32_t var_18

if ((*data_4ac3b8)(&pvarg, arg1, 0x400, 0, 3) != 0)
    uint32_t eax_6
    int32_t ecx_1
    int32_t edx_1
    eax_6, edx_1, ecx_1 = (*data_4ac3b8)(&pvarg, arg1, 0x400, 0, 5)
    
    if (eax_6 == 0)
        int32_t result_2
        int32_t edx_2
        result_2, edx_2 = sub_403370(fconvert.t(pvarg...__offset(0x8).q))
        result = result_2
        var_18 = edx_2
    else if (eax_6 != 0x80020005)
        ecx_1.w = 0x14
        sub_41040c(eax_6, *arg1, ecx_1.w)
        result = 0
        var_18 = 0
    else
        result = sub_412230(arg1, edx_1, ecx_1) & 0x7f
        var_18 = 0
else
    int32_t result_1
    int32_t edx
    edx:result_1 = sx.q(pvarg...__offset(0x8).d)
    result = result_1
    var_18 = edx
return result
