// 函数: sub_45f89c
// 地址: 0x45f89c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_418a64(0, 0x7fffffff, 0x7fffffff, arg2, 0)
void* result = sub_45b7f4(arg1)

if (result - 1 s>= 0)
    void* edi_2 = result
    int32_t var_14 = 0
    void* i
    
    do
        result = sub_45b7b8(arg1, var_14)
        void* result_1 = result
        
        if (*(result_1 + 0x57) != 0)
        label_45f907:
            
            if ((*(**(result_1 + 0x78) + 0x10))(arg1, var_14) s< *arg2)
                *arg2 = (*(**(result_1 + 0x78) + 0x10))()
            
            if ((*(**(result_1 + 0x78) + 0x10))() s< arg2[1])
                arg2[1] = (*(**(result_1 + 0x78) + 0x10))()
            
            if ((*(**(result_1 + 0x78) + 0x10))() + (*(**(result_1 + 0x78) + 0x10))() s> arg2[2])
                arg2[2] = (*(**(result_1 + 0x78) + 0x10))() + (*(**(result_1 + 0x78) + 0x10))()
            
            void* eax_19 = (*(**(result_1 + 0x78) + 0x10))()
            result = (*(**(result_1 + 0x78) + 0x10))()
            
            if (eax_19 + result s> arg2[3])
                void* eax_22 = (*(**(result_1 + 0x78) + 0x10))()
                result = (*(**(result_1 + 0x78) + 0x10))()
                arg2[3] = eax_22 + result
        else if ((*(result_1 + 0x1c) & 0x10) != 0 && (*(result_1 + 0x51) & 4) == 0)
            goto label_45f907
        
        var_14 += 1
        i = edi_2
        edi_2 -= 1
    while (i != 1)

return result
