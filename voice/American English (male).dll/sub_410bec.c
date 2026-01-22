// 函数: sub_410bec
// 地址: 0x410bec
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t result = arg3
int32_t edi = arg3
int32_t* ebx = arg1

if (ebx[7].b != 0)
    if ((*(*ebx + 0x8c))(result) == 0)
        (*(*ebx + 0x88))(edi)
    else
        char eax_2 = *(ebx + 0x1d)
        
        if (eax_2 u>= 1)
            int32_t esi
            
            if (eax_2 == 2)
                ebx, esi, edi = sub_41019c(0, data_413424)
            (*(*ebx + 0x88))(edi)
else
    result = ebx[5]
    (*(*ebx + 0x88))(edi)

return result
