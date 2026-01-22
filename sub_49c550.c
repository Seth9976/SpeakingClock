// 函数: sub_49c550
// 地址: 0x49c550
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ecx
int32_t var_8 = ecx
char result = 0

if ((arg1[7].b & 1) == 0)
    if (sub_49c25c(arg1) == 0)
    label_49c5ba:
        
        if (arg1[0xbb] != 0)
            (*(*arg1 + 0x44))()
            
            if (sub_406bf8(&ebp_1[-0xd], ebp_1[-1]) == 0)
                sub_406c38(*ebp_1[-1] + *ebp_1[3], *(ebp_1[-1] + 4) + *(ebp_1[3] + 4), &ebp_1[-3])
                void* eax_22 = ebp_1[-1]
                ebp_1[-7] = *eax_22
                void* edi_4 = &ebp_1[-6]
                void* esi_2 = eax_22 + 4
                *edi_4 = *esi_2
                void* edi_5 = edi_4 + 4
                void* esi_3 = esi_2 + 4
                *edi_5 = *esi_3
                *(edi_5 + 4) = *(esi_3 + 4)
            else
                GetClipBox(sub_42c73c(arg2), &ebp_1[-7])
                sub_406c38(ebp_1[-7], ebp_1[-6], &ebp_1[-3])
            
            if (arg1[0xba].b == 0)
                HPALETTE hPal = (*(*arg1 + 0x18c))(0)
                SelectPalette(sub_42c73c(arg2), hPal)
                RealizePalette(sub_42c73c(arg2))
            
            sub_406ce8(ebp_1[-5] - ebp_1[-7], ebp_1[-2], ebp_1[-3], &ebp_1[-0xd], 
                ebp_1[-4] - ebp_1[-6])
            sub_42c124(sub_430bec((*(*arg1 + 0x178))(&ebp_1[-0xd])), &ebp_1[-7], arg2)
            result = 1
        else
            result = sub_49b0d8(ebp_1[-1], arg2, arg1, 0, ebp_1[3])
    else
        char eax_4
        eax_4, ebp_1 = sub_4982fc(*(arg1[0xc] + 0x30))
        
        if (eax_4 == 0)
            goto label_49c5ba
        
        ebp_1[3]
        (*(*arg1 + 0x188))()
        ebp_1[-1]
        
        if ((*(**(arg1[0xc] + 0x30) + 0x180))(0, &ebp_1[-9]) == 0)
            goto label_49c5ba
        
        result = 1

*ebp_1
return result
