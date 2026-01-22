// 函数: sub_461d7c
// 地址: 0x461d7c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = sub_461b54()

if (result != 0 && *(arg1 + 0x10) != 0)
    int32_t i = sub_46219c(arg1)
    char eax_3 = *(arg1 + 0x10)
    int32_t edi_1
    
    if (eax_3 == 1)
        edi_1 = sub_461cc4(arg1, 1)
    else if (eax_3 == 2)
        edi_1 = sub_461cc4(arg1, 2)
    else
        edi_1 = 0
    
    result = divs.dp.d(sx.q(edi_1), sub_461b54())
    int32_t result_1 = result
    
    for (; i != 0; i = result)
        if (*(i + 0xc) != 0)
            sub_4620c0(i, sub_461bb0(i) + result_1)
        else
            sub_4620c0(i, edi_1)
        
        sub_461f1c(i)
        result = sub_462174(i)

return result
