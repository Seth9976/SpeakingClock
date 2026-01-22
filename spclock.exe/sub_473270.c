// 函数: sub_473270
// 地址: 0x473270
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* result = arg1

if (*(result + 0x1da) != 0)
    result = sub_45b7f4(arg1)
    
    if (result - 1 s>= 0)
        void* esi_3 = result
        int32_t edi_1 = 0
        void* i
        
        do
            int32_t* eax_2 = sub_45b7b8(arg1, edi_1)
            
            if ((*(eax_2 + 0x51) & 0x80) != 0 && *(eax_2 + 0x57) != 0)
                (*(*eax_2 + 0x7c))()
            
            result = sub_403df4(eax_2, &data_453234)
            
            if (result.b != 0)
                result = sub_473270(arg2)
            
            edi_1 += 1
            i = esi_3
            esi_3 -= 1
        while (i != 1)

return result
