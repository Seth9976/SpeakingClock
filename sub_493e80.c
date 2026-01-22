// 函数: sub_493e80
// 地址: 0x493e80
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_10 = ecx
int32_t edx
int32_t var_c = edx
int32_t result
int32_t* ebp_1
result, ebp_1 = sub_49371c(arg1, "Source 1")

if (result.b != 0)
    result, ebp_1 = sub_49371c(ebp_1[-2], "Source 2")
    
    if (result.b != 0)
        result, ebp_1 = sub_49371c(ebp_1[4], "Target")
        
        if (result.b != 0)
            if (sub_4937e4(ebp_1[-1], &ebp_1[-7]) != 0)
                if (sub_430cd8(ebp_1[4]) != sub_430cd8(ebp_1[-1]))
                    char eax_11 = sub_430cd8(ebp_1[-1])
                    sub_431d30(ebp_1[4], eax_11)
                
                ebp_1[-4] = 0xffffff01
                void* ebx_2 = &ebp_1[-0x208]
                
                do
                    *ebx_2 = sub_403370(float.t(ebp_1[-4]) * fconvert.t(ebp_1[3]))
                    ebp_1[-4] += 1
                    ebx_2 += 4
                while (ebp_1[-4] != 0x100)
                
                result = *(ebp_1[-3] + 0xc) - *(ebp_1[-3] + 4) - 1
                
                if (result s>= 0)
                    ebp_1[-8] = result + 1
                    ebp_1[-4] = 0
                    int32_t i
                    
                    do
                        char* esi_1 = sub_4936f0(
                            sub_430d5c(ebp_1[-1], *(ebp_1[-3] + 4) + ebp_1[-4]), 
                            *ebp_1[-3] * ebp_1[-7])
                        ebp_1[-5] = sub_4936f0(sub_430d5c(ebp_1[-2], *(ebp_1[5] + 4) + ebp_1[-4]), 
                            *ebp_1[5] * ebp_1[-7])
                        ebp_1[-6] = sub_4936f0(sub_430d5c(ebp_1[4], *(ebp_1[2] + 4) + ebp_1[-4]), 
                            *ebp_1[2] * ebp_1[-7])
                        result = *(ebp_1[-3] + 8) - *ebp_1[-3] - 1
                        
                        if (result s>= 0)
                            ebp_1[-9] = result + 1
                            int32_t j
                            
                            do
                                char* eax_31 = ebp_1[-5]
                                char* ecx_2 = ebp_1[-6]
                                *ecx_2 = ebp_1[zx.d(*esi_1) - zx.d(*eax_31) - 0x109].b + *eax_31
                                ecx_2[1] =
                                    ebp_1[zx.d(esi_1[1]) - zx.d(eax_31[1]) - 0x109].b + eax_31[1]
                                ecx_2[2] =
                                    ebp_1[zx.d(esi_1[2]) - zx.d(eax_31[2]) - 0x109].b + eax_31[2]
                                esi_1 = sub_4936f0(esi_1, ebp_1[-7])
                                ebp_1[-5] = sub_4936f0(ebp_1[-5], ebp_1[-7])
                                result = sub_4936f0(ebp_1[-6], ebp_1[-7])
                                ebp_1[-6] = result
                                j = ebp_1[-9]
                                ebp_1[-9] -= 1
                            while (j != 1)
                        
                        ebp_1[-4] += 1
                        i = ebp_1[-8]
                        ebp_1[-8] -= 1
                    while (i != 1)
            else
                ebp_1[-1]
                result = (*(*ebp_1[-2] + 8))()

*ebp_1
return result
