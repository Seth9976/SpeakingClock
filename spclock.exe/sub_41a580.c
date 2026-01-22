// 函数: sub_41a580
// 地址: 0x41a580
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int16_t* ecx
int16_t* var_14 = ecx

if (arg2 == *(arg1 + 4))
    return 

if (arg2 s< 0)
    sub_41a55c()

int32_t eax_2 = arg2 + 0x1f

if (eax_2 s< 0)
    eax_2 += 0x1f

int32_t edi_3 = (eax_2 s>> 5) * 4
int32_t eax_6 = *(arg1 + 4) + 0x1f

if (eax_6 s< 0)
    eax_6 += 0x1f

int32_t ebp_3 = (eax_6 s>> 5) * 4

if (ebp_3 != edi_3)
    var_14 = nullptr
    
    if (edi_3 != 0)
        var_14 = sub_402ea8(edi_3)
        sub_403578(var_14, edi_3, 0)
    
    if (ebp_3 != 0)
        if (var_14 != 0)
            void* eax_11 = sub_41a574(ebp_3, edi_3)
            sub_4030d0(*(arg1 + 8), var_14, eax_11, var_14)
        
        sub_402ec4(*(arg1 + 8))
    
    *(arg1 + 8) = var_14

*(arg1 + 4) = arg2
