// 函数: sub_47cb94
// 地址: 0x47cb94
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char result = (*(*arg1 + 0x3c))()

if (result == 0)
    return result

arg1[9] = arg2
int32_t* eax_1 = arg1[4]
sub_403e18(eax_1, &data_468718)
void* eax_2 = eax_1[0x17]

if (eax_2 != 0 && *(eax_2 + 0x38) != 0)
    int32_t ebp_1 = arg1[9]
    int32_t eax_5
    
    if (ebp_1 s>= 0)
        eax_5 = sub_4670ec(*(eax_1[0x17] + 0x38))
    
    if (ebp_1 s< 0 || ebp_1 s>= eax_5)
        sub_47c604(arg1[8])
    else
        arg1[8]
        sub_47c930(arg2, *(eax_1[0x17] + 0x38))

return sub_47c634(arg1[8])
