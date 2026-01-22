// 函数: sub_48fb58
// 地址: 0x48fb58
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t result = zx.d(*(*(arg1 - 4) + 0x24))

if (result u<= 0xa)
    result = zx.d(lookup_table_48fb82[result])
    int32_t var_14
    void var_10
    
    switch (result)
        case 1
            uint32_t ebx_1 = zx.d(*(*(arg1 - 4) + 0x19))
            sub_406c1c(*(*(arg1 + 0x1c) + 8) + ebx_1, *(*(arg1 + 0x1c) + 4), **(arg1 + 0x1c), 
                &var_14, *(*(arg1 + 0x1c) + 0xc) + ebx_1)
            result = *(arg1 + 0x1c)
            *result = var_14
            int32_t* edi_2 = result + 4
            void* esi_1 = &var_10
            *edi_2 = *esi_1
            void* edi_3 = &edi_2[1]
            void* esi_2 = esi_1 + 4
            *edi_3 = *esi_2
            *(edi_3 + 4) = *(esi_2 + 4)
        case 2
            uint32_t ebx_2 = zx.d(*(*(arg1 - 4) + 0x1a))
            sub_406c1c(*(*(arg1 + 0x1c) + 8) + ebx_2, *(*(arg1 + 0x1c) + 4), **(arg1 + 0x1c), 
                &var_14, *(*(arg1 + 0x1c) + 0xc) + ebx_2)
            result = *(arg1 + 0x1c)
            *result = var_14
            int32_t* edi_7 = result + 4
            void* esi_5 = &var_10
            *edi_7 = *esi_5
            void* edi_8 = &edi_7[1]
            void* esi_6 = esi_5 + 4
            *edi_8 = *esi_6
            *(edi_8 + 4) = *(esi_6 + 4)
        case 3
            uint32_t ebx_3 = zx.d(*(*(arg1 - 4) + 0x19))
            uint32_t esi_9 = zx.d(*(*(arg1 - 4) + 0x1a))
            sub_406c1c(*(*(arg1 + 0x1c) + 8) + ebx_3 + esi_9, *(*(arg1 + 0x1c) + 4), 
                **(arg1 + 0x1c), &var_14, *(*(arg1 + 0x1c) + 0xc) + ebx_3 + esi_9)
            result = *(arg1 + 0x1c)
            *result = var_14
            int32_t* edi_12 = result + 4
            void* esi_10 = &var_10
            *edi_12 = *esi_10
            void* edi_13 = &edi_12[1]
            void* esi_11 = esi_10 + 4
            *edi_13 = *esi_11
            *(edi_13 + 4) = *(esi_11 + 4)
        case 4
            uint32_t ebx_4 = zx.d(*(*(arg1 - 4) + 0x1a))
            sub_406c1c(*(*(arg1 + 0x1c) + 8) + ebx_4, *(*(arg1 + 0x1c) + 4), **(arg1 + 0x1c), 
                &var_14, *(*(arg1 + 0x1c) + 0xc) + ebx_4)
            result = *(arg1 + 0x1c)
            *result = var_14
            int32_t* edi_17 = result + 4
            void* esi_14 = &var_10
            *edi_17 = *esi_14
            void* edi_18 = &edi_17[1]
            void* esi_15 = esi_14 + 4
            *edi_18 = *esi_15
            *(edi_18 + 4) = *(esi_15 + 4)

return result
