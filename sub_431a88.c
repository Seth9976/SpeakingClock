// 函数: sub_431a88
// 地址: 0x431a88
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result = sub_430c58(arg1)

if (arg2 != result.b)
    void* edi_1 = arg1->__offset(0x28).d
    
    if (*(edi_1 + 8) != 0 || *(edi_1 + 0x14) != 0)
        if (arg2 != 0)
            result = *(edi_1 + 8)
            
            if (result == 0 || result == *(edi_1 + 0x14))
                sub_430e88(arg1)
                sub_43107c(arg1)
                void var_64
                __builtin_memcpy(&var_64, edi_1 + 0x18, 0x54)
                int32_t var_4c_1 = 0
                bool ebx = *(edi_1 + 4) == 1
                HPALETTE ebp_2
                
                if (ebx == 0)
                    ebp_2 = sub_4303a8(*(edi_1 + 0x10))
                else
                    ebp_2 = *(edi_1 + 0x10)
                
                void* var_68_4 = &var_64
                *(edi_1 + 0x10)
                HPALETTE eax_13 = sub_42fd44(*(edi_1 + 0x14), nullptr)
                
                if (ebx == 0)
                    sub_4312bc(arg1, eax_13, ebp_2, nullptr, *(edi_1 + 0x70), &var_64)
                else
                    *(edi_1 + 8) = eax_13
                
                return arg1->Next->__offset(0x10).d()
        else
            result = *(edi_1 + 0x14)
            
            if (result == 0 || result != *(edi_1 + 8))
                sub_430e88(arg1)
                sub_43107c(arg1)
                sub_430e14(arg1)
                
                if (*(edi_1 + 4) != 1)
                    sub_4307b8(*(edi_1 + 0x10), *(edi_1 + 0x14), arg1, edi_1 + 0x18)
                else
                    int32_t eax_4 = *(edi_1 + 0x14)
                    *(edi_1 + 0x14) = 0
                    int32_t ebp_1 = *(edi_1 + 0x10)
                    *(edi_1 + 0x10) = 0
                    sub_4312bc(arg1, eax_4, ebp_1, nullptr, *(edi_1 + 0x70), edi_1 + 0x18)
                
                return arg1->Next->__offset(0x10).d()
    else if (arg2 != 1)
        *(edi_1 + 0x30) = 0x28
    else
        result = nullptr
        *(edi_1 + 0x30) = 0

return result
