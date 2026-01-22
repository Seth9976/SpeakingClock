// 函数: sub_4624f0
// 地址: 0x4624f0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4

if (*(arg2 + 0x57) != 0)
    void* eax = arg1[0xe]
    
    if (eax != 0)
        *(eax + 4) = arg2
        sub_461f1c(eax)
    else if (*(arg1[0x19] + 8) != 0)
        if (arg3 == 0 || arg3 == 5)
            char var_5_1 = 4
        
        sub_4623ec(arg1, arg2)
        sub_4623ec(arg1, ebp_1[2])
        ebp_1[-2] = 0
        *(ebp_1 - 9) = *(zx.d(*(ebp_1 - 1)) + 0x4ab974)
        int32_t eax_23
        int32_t edx_7
        eax_23, edx_7 = sub_461b40(arg1[0x19])
        
        if (eax_23 == 1)
            void* edi_8 = arg1[0x19]
            *(edi_8 + 0x10) = *(ebp_1 - 9)
            char eax_26 = *(ebp_1 - 9)
            
            if (eax_26 == 1)
                sub_4620c0(edi_8, sub_461cc4(*(edi_8 + 8), 2))
                int32_t eax_32
                eax_32, edx_7 = sub_461cc4(*(arg1[0x19] + 8), 1)
                arg1[0x1a] = eax_32
            else if (eax_26 == 2)
                sub_4620c0(edi_8, sub_461cc4(*(edi_8 + 8), 1))
                int32_t eax_38
                eax_38, edx_7 = sub_461cc4(*(arg1[0x19] + 8), 2)
                arg1[0x1a] = eax_38
        
        edx_7.b = 1
        void* eax_39 = sub_461b1c(&data_453d50, edx_7, arg1)
        *(eax_39 + 4) = arg2
        char edx_12
        
        if (ebp_1[-2] == 0)
            edx_12 = *(arg1[0x19] + 0x10)
        else
            edx_12 = *(*(ebp_1[-2] + 0x14) + 0x10)
        
        if (*(ebp_1 - 9) == 0)
            *(ebp_1 - 9) = edx_12
        
        if (edx_12 != *(ebp_1 - 9))
            sub_46270c(ebp_1[-2], eax_39, arg1, *(zx.d(*(ebp_1 - 1)) + 0x4ab97c), *(ebp_1 - 9))
        else
            sub_4628b4(ebp_1[-2], eax_39, arg1, *(zx.d(*(ebp_1 - 1)) + 0x4ab97c))
    else
        (*(*arg1[5] + 0x44))()
        (*(*arg1[5] + 0x90))()
        int32_t var_24
        int32_t var_1c
        int32_t edi_2 = var_1c - var_24
        int32_t var_20
        int32_t var_18
        int32_t var_14_1 = var_18 - var_20
        
        if (*(arg1[5] + 0x5c) != 0)
            if (edi_2 == 0)
                edi_2 = sub_457778(arg2)
            
            if (var_14_1 == 0)
                var_14_1 = sub_457764(arg2)
        
        int32_t var_34
        sub_418a8c(edi_2, var_20, var_24, &var_34, var_14_1)
        var_24 = var_34
        int32_t* edi_3 = &var_20
        void var_30
        void* esi_1 = &var_30
        *edi_3 = *esi_1
        void* edi_4 = &edi_3[1]
        void* esi_2 = esi_1 + 4
        *edi_4 = *esi_2
        *(edi_4 + 4) = *(esi_2 + 4)
        (**arg1)()
        sub_457110(arg2, &var_24)
        int32_t edx_3
        edx_3.b = 1
        void* eax_15 = sub_461b1c(&data_453d50, edx_3, arg1)
        void* edx_4 = arg1[0x19]
        *(edx_4 + 8) = eax_15
        *(eax_15 + 0x14) = edx_4
        *(eax_15 + 4) = arg2
    
    (*(*arg1[5] + 0x80))()

*ebp_1
