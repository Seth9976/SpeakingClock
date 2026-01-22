// 函数: sub_4a5000
// 地址: 0x4a5000
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t edx
edx.b = 1
int32_t* eax = sub_46d398(sub_4a0ba0+0x48, edx)

if (*(arg1 + 0x447) == 0)
    *(arg1 + 0x3fc)
    sub_49fc18()
else
    *(arg1 + 0x3fc)
    sub_49fc40()

*(arg1 + 0x448)
(*(*eax[0xdf] + 0xdc))()
*(arg1 + 0x449)
(*(*eax[0xe0] + 0xdc))()
*(arg1 + 0x44c)
(*(*eax[0xeb] + 0xdc))()
*(arg1 + 0x446)
(*(*eax[0xe2] + 0xdc))()
*(arg1 + 0x445)
(*(*eax[0xea] + 0xdc))()
*(arg1 + 0x444)
(*(*eax[0xe1] + 0xdc))()
*(arg1 + 0x447)
(*(*eax[0xe9] + 0xdc))()
*(arg1 + 0x501)
(*(*eax[0xe8] + 0xdc))()
*(arg1 + 0x450)
(*(*eax[0xe3] + 0xdc))()
*(arg1 + 0x424)
sub_483238(eax[0xe4])
*(arg1 + 0x428)
sub_483238(eax[0xef])

if (*(arg1 + 0x450) == 0)
    (*(*eax[0xe4] + 0x68))()

if ((*(*eax + 0xfc))() != 1)
    sub_47382c(data_4b1dec, *(arg1 + 0x450))
    sub_473840(data_4b1dec, *(arg1 + 0x424))
else
    *(arg1 + 0x449) = (*(*eax[0xe0] + 0xd8))()
    *(arg1 + 0x44c) = (*(*eax[0xeb] + 0xd8))()
    
    if ((*(*eax[0xe2] + 0xd8))() != *(arg1 + 0x446))
        *(arg1 + 0x446) = (*(*eax[0xe2] + 0xd8))()
        sub_4a6fa4(arg1)
    
    *(arg1 + 0x445) = (*(*eax[0xea] + 0xd8))()
    char eax_30 = (*(*eax[0xe9] + 0xd8))()
    *(arg1 + 0x447) = eax_30
    
    if (eax_30 == 0)
        *(arg1 + 0x3fc)
        sub_49fc18()
    else
        *(arg1 + 0x3fc)
        sub_49fc40()
    
    sub_4430a8(*(arg1 + 0x360), *(arg1 + 0x430))
    *(arg1 + 0x428) = *(eax[0xef] + 0x270)
    
    if ((*(*eax[0xdf] + 0xd8))() != *(arg1 + 0x448))
        *(arg1 + 0x448) = (*(*eax[0xdf] + 0xd8))()
        sub_4a6af8(arg1)
    
    char eax_42
    int32_t ecx_11
    BOOL edx_24
    eax_42, edx_24, ecx_11 = (*(*eax[0xe8] + 0xd8))()
    *(arg1 + 0x501) = eax_42
    
    if (eax_42 == 0)
        sub_491ac4(*(arg1 + 0x3f8), 0, ecx_11)
        int16_t eax_48 = sub_44a90c(0, 0)
        sub_44e4c4(*(arg1 + 0x3f4), eax_48)
    else
        edx_24.b = 1
        sub_491ac4(*(arg1 + 0x3f8), edx_24, ecx_11)
        int16_t eax_45 = sub_44a90c(0x53, 6)
        sub_44e4c4(*(arg1 + 0x3f4), eax_45)
    
    char eax_51
    int32_t edx_28
    eax_51, edx_28 = (*(*eax[0xe1] + 0xd8))()
    *(arg1 + 0x444) = eax_51
    
    if (*(arg1 + 0x444) != 0 && *(arg1 + 0x277) != 3)
        edx_28.b = 3
        sub_46f7f4(arg1, edx_28)
    
    if (*(arg1 + 0x444) == 0 && *(arg1 + 0x277) != 0)
        sub_46f7f4(arg1, 0)
    
    *(arg1 + 0x450) = (*(*eax[0xe3] + 0xd8))()
    *(arg1 + 0x424) = *(eax[0xe4] + 0x270)
    sub_47382c(data_4b1dec, *(arg1 + 0x450))
    sub_473840(data_4b1dec, *(arg1 + 0x424))
    int32_t esi
    esi.w = 0xffa6
    sub_403e64(arg1, esi)

sub_472f50(eax)
*(arg1 + 0x3fc)
return sub_49fc18()
