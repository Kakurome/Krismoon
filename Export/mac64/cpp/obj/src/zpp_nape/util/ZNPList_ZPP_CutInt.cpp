#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_CutInt
#include <zpp_nape/geom/ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CutInt
#include <zpp_nape/util/ZNPList_ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutInt
#include <zpp_nape/util/ZNPNode_ZPP_CutInt.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_CutInt_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","new",0x2af7bf74,"zpp_nape.util.ZNPList_ZPP_CutInt.new","zpp_nape/util/Lists.hx",5596,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5606)
	this->length = (int)0;
	HX_STACK_LINE(5605)
	this->pushmod = false;
	HX_STACK_LINE(5604)
	this->modified = false;
	HX_STACK_LINE(5597)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_CutInt_obj::~ZNPList_ZPP_CutInt_obj() { }

Dynamic ZNPList_ZPP_CutInt_obj::__CreateEmpty() { return  new ZNPList_ZPP_CutInt_obj; }
hx::ObjectPtr< ZNPList_ZPP_CutInt_obj > ZNPList_ZPP_CutInt_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_CutInt_obj > result = new ZNPList_ZPP_CutInt_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_CutInt_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_CutInt_obj > result = new ZNPList_ZPP_CutInt_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZNPNode_ZPP_CutInt ZNPList_ZPP_CutInt_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","begin",0xbf22c63d,"zpp_nape.util.ZNPList_ZPP_CutInt.begin","zpp_nape/util/Lists.hx",5602,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5602)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,begin,return )

Void ZNPList_ZPP_CutInt_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_CutInt i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","setbegin",0xdc39cbb3,"zpp_nape.util.ZNPList_ZPP_CutInt.setbegin","zpp_nape/util/Lists.hx",5609,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(5610)
		this->head = i;
		HX_STACK_LINE(5611)
		this->modified = true;
		HX_STACK_LINE(5612)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,setbegin,(void))

::zpp_nape::geom::ZPP_CutInt ZNPList_ZPP_CutInt_obj::add( ::zpp_nape::geom::ZPP_CutInt o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","add",0x2aede135,"zpp_nape.util.ZNPList_ZPP_CutInt.add","zpp_nape/util/Lists.hx",5615,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(5615)
	::zpp_nape::util::ZNPNode_ZPP_CutInt temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(5615)
	{
		HX_STACK_LINE(5615)
		::zpp_nape::util::ZNPNode_ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5615)
		{
			HX_STACK_LINE(5615)
			if (((::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool == null()))){
				HX_STACK_LINE(5615)
				::zpp_nape::util::ZNPNode_ZPP_CutInt _g = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(5615)
				ret = _g;
			}
			else{
				HX_STACK_LINE(5615)
				ret = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
				HX_STACK_LINE(5615)
				::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = ret->next;
				HX_STACK_LINE(5615)
				ret->next = null();
			}
			HX_STACK_LINE(5615)
			Dynamic();
		}
		HX_STACK_LINE(5615)
		ret->elt = o;
		HX_STACK_LINE(5615)
		temp = ret;
	}
	HX_STACK_LINE(5615)
	temp->next = this->head;
	HX_STACK_LINE(5615)
	this->head = temp;
	HX_STACK_LINE(5615)
	this->modified = true;
	HX_STACK_LINE(5615)
	(this->length)++;
	HX_STACK_LINE(5615)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,add,return )

::zpp_nape::geom::ZPP_CutInt ZNPList_ZPP_CutInt_obj::inlined_add( ::zpp_nape::geom::ZPP_CutInt o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","inlined_add",0xe3b56fa1,"zpp_nape.util.ZNPList_ZPP_CutInt.inlined_add","zpp_nape/util/Lists.hx",5619,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(5628)
	::zpp_nape::util::ZNPNode_ZPP_CutInt temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(5628)
	{
		HX_STACK_LINE(5629)
		::zpp_nape::util::ZNPNode_ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5630)
		{
			HX_STACK_LINE(5631)
			if (((::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool == null()))){
				HX_STACK_LINE(5632)
				::zpp_nape::util::ZNPNode_ZPP_CutInt _g = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(5632)
				ret = _g;
			}
			else{
				HX_STACK_LINE(5638)
				ret = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
				HX_STACK_LINE(5639)
				::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = ret->next;
				HX_STACK_LINE(5640)
				ret->next = null();
			}
			HX_STACK_LINE(5645)
			Dynamic();
		}
		HX_STACK_LINE(5647)
		ret->elt = o;
		HX_STACK_LINE(5648)
		temp = ret;
	}
	HX_STACK_LINE(5650)
	temp->next = this->head;
	HX_STACK_LINE(5651)
	this->head = temp;
	HX_STACK_LINE(5652)
	this->modified = true;
	HX_STACK_LINE(5653)
	(this->length)++;
	HX_STACK_LINE(5654)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,inlined_add,return )

Void ZNPList_ZPP_CutInt_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_CutInt x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","addAll",0x836ebeec,"zpp_nape.util.ZNPList_ZPP_CutInt.addAll","zpp_nape/util/Lists.hx",5665,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(5666)
		::zpp_nape::util::ZNPNode_ZPP_CutInt cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(5667)
		while((true)){
			HX_STACK_LINE(5667)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(5667)
				break;
			}
			HX_STACK_LINE(5668)
			::zpp_nape::geom::ZPP_CutInt i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(5669)
			this->add(i);
			HX_STACK_LINE(5670)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_CutInt ZNPList_ZPP_CutInt_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_CutInt cur,::zpp_nape::geom::ZPP_CutInt o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","insert",0x8250f8a5,"zpp_nape.util.ZNPList_ZPP_CutInt.insert","zpp_nape/util/Lists.hx",5675,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(5675)
	::zpp_nape::util::ZNPNode_ZPP_CutInt temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(5675)
	{
		HX_STACK_LINE(5675)
		::zpp_nape::util::ZNPNode_ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5675)
		{
			HX_STACK_LINE(5675)
			if (((::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool == null()))){
				HX_STACK_LINE(5675)
				::zpp_nape::util::ZNPNode_ZPP_CutInt _g = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(5675)
				ret = _g;
			}
			else{
				HX_STACK_LINE(5675)
				ret = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
				HX_STACK_LINE(5675)
				::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = ret->next;
				HX_STACK_LINE(5675)
				ret->next = null();
			}
			HX_STACK_LINE(5675)
			Dynamic();
		}
		HX_STACK_LINE(5675)
		ret->elt = o;
		HX_STACK_LINE(5675)
		temp = ret;
	}
	HX_STACK_LINE(5675)
	if (((cur == null()))){
		HX_STACK_LINE(5675)
		temp->next = this->head;
		HX_STACK_LINE(5675)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(5675)
		temp->next = cur->next;
		HX_STACK_LINE(5675)
		cur->next = temp;
	}
	HX_STACK_LINE(5675)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(5675)
	this->pushmod = _g1;
	HX_STACK_LINE(5675)
	(this->length)++;
	HX_STACK_LINE(5675)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CutInt_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_CutInt ZNPList_ZPP_CutInt_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_CutInt cur,::zpp_nape::geom::ZPP_CutInt o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","inlined_insert",0x639935b9,"zpp_nape.util.ZNPList_ZPP_CutInt.inlined_insert","zpp_nape/util/Lists.hx",5679,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(5688)
	::zpp_nape::util::ZNPNode_ZPP_CutInt temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(5688)
	{
		HX_STACK_LINE(5689)
		::zpp_nape::util::ZNPNode_ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5690)
		{
			HX_STACK_LINE(5691)
			if (((::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool == null()))){
				HX_STACK_LINE(5692)
				::zpp_nape::util::ZNPNode_ZPP_CutInt _g = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(5692)
				ret = _g;
			}
			else{
				HX_STACK_LINE(5698)
				ret = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
				HX_STACK_LINE(5699)
				::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = ret->next;
				HX_STACK_LINE(5700)
				ret->next = null();
			}
			HX_STACK_LINE(5705)
			Dynamic();
		}
		HX_STACK_LINE(5707)
		ret->elt = o;
		HX_STACK_LINE(5708)
		temp = ret;
	}
	HX_STACK_LINE(5710)
	if (((cur == null()))){
		HX_STACK_LINE(5711)
		temp->next = this->head;
		HX_STACK_LINE(5712)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(5715)
		temp->next = cur->next;
		HX_STACK_LINE(5716)
		cur->next = temp;
	}
	HX_STACK_LINE(5718)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(5718)
	this->pushmod = _g1;
	HX_STACK_LINE(5719)
	(this->length)++;
	HX_STACK_LINE(5720)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CutInt_obj,inlined_insert,return )

Void ZNPList_ZPP_CutInt_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","pop",0x2af94ca5,"zpp_nape.util.ZNPList_ZPP_CutInt.pop","zpp_nape/util/Lists.hx",5723,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5723)
		::zpp_nape::util::ZNPNode_ZPP_CutInt ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5723)
		this->head = ret->next;
		HX_STACK_LINE(5723)
		{
			HX_STACK_LINE(5723)
			::zpp_nape::util::ZNPNode_ZPP_CutInt o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(5723)
			o->elt = null();
			HX_STACK_LINE(5723)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
			HX_STACK_LINE(5723)
			::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
		}
		HX_STACK_LINE(5723)
		if (((this->head == null()))){
			HX_STACK_LINE(5723)
			this->pushmod = true;
		}
		HX_STACK_LINE(5723)
		this->modified = true;
		HX_STACK_LINE(5723)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,pop,(void))

Void ZNPList_ZPP_CutInt_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","inlined_pop",0xe3c0db11,"zpp_nape.util.ZNPList_ZPP_CutInt.inlined_pop","zpp_nape/util/Lists.hx",5727,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5736)
		::zpp_nape::util::ZNPNode_ZPP_CutInt ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5737)
		this->head = ret->next;
		HX_STACK_LINE(5739)
		{
			HX_STACK_LINE(5740)
			::zpp_nape::util::ZNPNode_ZPP_CutInt o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(5749)
			o->elt = null();
			HX_STACK_LINE(5750)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
			HX_STACK_LINE(5751)
			::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
		}
		HX_STACK_LINE(5756)
		if (((this->head == null()))){
			HX_STACK_LINE(5756)
			this->pushmod = true;
		}
		HX_STACK_LINE(5757)
		this->modified = true;
		HX_STACK_LINE(5758)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,inlined_pop,(void))

::zpp_nape::geom::ZPP_CutInt ZNPList_ZPP_CutInt_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","pop_unsafe",0xc62557c0,"zpp_nape.util.ZNPList_ZPP_CutInt.pop_unsafe","zpp_nape/util/Lists.hx",5761,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5761)
	::zpp_nape::geom::ZPP_CutInt ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5761)
	this->pop();
	HX_STACK_LINE(5761)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,pop_unsafe,return )

::zpp_nape::geom::ZPP_CutInt ZNPList_ZPP_CutInt_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","inlined_pop_unsafe",0xe0d3aed4,"zpp_nape.util.ZNPList_ZPP_CutInt.inlined_pop_unsafe","zpp_nape/util/Lists.hx",5765,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5774)
	::zpp_nape::geom::ZPP_CutInt ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5775)
	this->pop();
	HX_STACK_LINE(5776)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_CutInt_obj::remove( ::zpp_nape::geom::ZPP_CutInt obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","remove",0xe8fc51b0,"zpp_nape.util.ZNPList_ZPP_CutInt.remove","zpp_nape/util/Lists.hx",5787,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(5787)
		::zpp_nape::util::ZNPNode_ZPP_CutInt pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(5787)
		::zpp_nape::util::ZNPNode_ZPP_CutInt cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(5787)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5787)
		while((true)){
			HX_STACK_LINE(5787)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(5787)
				break;
			}
			HX_STACK_LINE(5787)
			if (((cur->elt == obj))){
				HX_STACK_LINE(5787)
				{
					HX_STACK_LINE(5787)
					::zpp_nape::util::ZNPNode_ZPP_CutInt old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(5787)
					::zpp_nape::util::ZNPNode_ZPP_CutInt ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(5787)
					if (((pre == null()))){
						HX_STACK_LINE(5787)
						old = this->head;
						HX_STACK_LINE(5787)
						ret1 = old->next;
						HX_STACK_LINE(5787)
						this->head = ret1;
						HX_STACK_LINE(5787)
						if (((this->head == null()))){
							HX_STACK_LINE(5787)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(5787)
						old = pre->next;
						HX_STACK_LINE(5787)
						ret1 = old->next;
						HX_STACK_LINE(5787)
						pre->next = ret1;
						HX_STACK_LINE(5787)
						if (((ret1 == null()))){
							HX_STACK_LINE(5787)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(5787)
					{
						HX_STACK_LINE(5787)
						::zpp_nape::util::ZNPNode_ZPP_CutInt o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(5787)
						o->elt = null();
						HX_STACK_LINE(5787)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
						HX_STACK_LINE(5787)
						::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
					}
					HX_STACK_LINE(5787)
					this->modified = true;
					HX_STACK_LINE(5787)
					(this->length)--;
					HX_STACK_LINE(5787)
					this->pushmod = true;
					HX_STACK_LINE(5787)
					ret1;
				}
				HX_STACK_LINE(5787)
				ret = true;
				HX_STACK_LINE(5787)
				break;
			}
			HX_STACK_LINE(5787)
			pre = cur;
			HX_STACK_LINE(5787)
			cur = cur->next;
		}
		HX_STACK_LINE(5787)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,remove,(void))

bool ZNPList_ZPP_CutInt_obj::try_remove( ::zpp_nape::geom::ZPP_CutInt obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","try_remove",0xdd4f8d74,"zpp_nape.util.ZNPList_ZPP_CutInt.try_remove","zpp_nape/util/Lists.hx",5789,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5798)
	::zpp_nape::util::ZNPNode_ZPP_CutInt pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(5799)
	::zpp_nape::util::ZNPNode_ZPP_CutInt cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5800)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5801)
	while((true)){
		HX_STACK_LINE(5801)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(5801)
			break;
		}
		HX_STACK_LINE(5802)
		if (((cur->elt == obj))){
			HX_STACK_LINE(5803)
			this->erase(pre);
			HX_STACK_LINE(5804)
			ret = true;
			HX_STACK_LINE(5805)
			break;
		}
		HX_STACK_LINE(5807)
		pre = cur;
		HX_STACK_LINE(5808)
		cur = cur->next;
	}
	HX_STACK_LINE(5810)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,try_remove,return )

Void ZNPList_ZPP_CutInt_obj::inlined_remove( ::zpp_nape::geom::ZPP_CutInt obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","inlined_remove",0xca448ec4,"zpp_nape.util.ZNPList_ZPP_CutInt.inlined_remove","zpp_nape/util/Lists.hx",5823,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(5823)
		::zpp_nape::util::ZNPNode_ZPP_CutInt pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(5823)
		::zpp_nape::util::ZNPNode_ZPP_CutInt cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(5823)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5823)
		while((true)){
			HX_STACK_LINE(5823)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(5823)
				break;
			}
			HX_STACK_LINE(5823)
			if (((cur->elt == obj))){
				HX_STACK_LINE(5823)
				{
					HX_STACK_LINE(5823)
					::zpp_nape::util::ZNPNode_ZPP_CutInt old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(5823)
					::zpp_nape::util::ZNPNode_ZPP_CutInt ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(5823)
					if (((pre == null()))){
						HX_STACK_LINE(5823)
						old = this->head;
						HX_STACK_LINE(5823)
						ret1 = old->next;
						HX_STACK_LINE(5823)
						this->head = ret1;
						HX_STACK_LINE(5823)
						if (((this->head == null()))){
							HX_STACK_LINE(5823)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(5823)
						old = pre->next;
						HX_STACK_LINE(5823)
						ret1 = old->next;
						HX_STACK_LINE(5823)
						pre->next = ret1;
						HX_STACK_LINE(5823)
						if (((ret1 == null()))){
							HX_STACK_LINE(5823)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(5823)
					{
						HX_STACK_LINE(5823)
						::zpp_nape::util::ZNPNode_ZPP_CutInt o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(5823)
						o->elt = null();
						HX_STACK_LINE(5823)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
						HX_STACK_LINE(5823)
						::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
					}
					HX_STACK_LINE(5823)
					this->modified = true;
					HX_STACK_LINE(5823)
					(this->length)--;
					HX_STACK_LINE(5823)
					this->pushmod = true;
					HX_STACK_LINE(5823)
					ret1;
				}
				HX_STACK_LINE(5823)
				ret = true;
				HX_STACK_LINE(5823)
				break;
			}
			HX_STACK_LINE(5823)
			pre = cur;
			HX_STACK_LINE(5823)
			cur = cur->next;
		}
		HX_STACK_LINE(5823)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,inlined_remove,(void))

bool ZNPList_ZPP_CutInt_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_CutInt obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","inlined_try_remove",0xf7fde488,"zpp_nape.util.ZNPList_ZPP_CutInt.inlined_try_remove","zpp_nape/util/Lists.hx",5827,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5836)
	::zpp_nape::util::ZNPNode_ZPP_CutInt pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(5837)
	::zpp_nape::util::ZNPNode_ZPP_CutInt cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5838)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5839)
	while((true)){
		HX_STACK_LINE(5839)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(5839)
			break;
		}
		HX_STACK_LINE(5840)
		if (((cur->elt == obj))){
			HX_STACK_LINE(5841)
			{
				HX_STACK_LINE(5841)
				::zpp_nape::util::ZNPNode_ZPP_CutInt old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(5841)
				::zpp_nape::util::ZNPNode_ZPP_CutInt ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(5841)
				if (((pre == null()))){
					HX_STACK_LINE(5841)
					old = this->head;
					HX_STACK_LINE(5841)
					ret1 = old->next;
					HX_STACK_LINE(5841)
					this->head = ret1;
					HX_STACK_LINE(5841)
					if (((this->head == null()))){
						HX_STACK_LINE(5841)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(5841)
					old = pre->next;
					HX_STACK_LINE(5841)
					ret1 = old->next;
					HX_STACK_LINE(5841)
					pre->next = ret1;
					HX_STACK_LINE(5841)
					if (((ret1 == null()))){
						HX_STACK_LINE(5841)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(5841)
				{
					HX_STACK_LINE(5841)
					::zpp_nape::util::ZNPNode_ZPP_CutInt o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(5841)
					o->elt = null();
					HX_STACK_LINE(5841)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
					HX_STACK_LINE(5841)
					::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
				}
				HX_STACK_LINE(5841)
				this->modified = true;
				HX_STACK_LINE(5841)
				(this->length)--;
				HX_STACK_LINE(5841)
				this->pushmod = true;
				HX_STACK_LINE(5841)
				ret1;
			}
			HX_STACK_LINE(5842)
			ret = true;
			HX_STACK_LINE(5843)
			break;
		}
		HX_STACK_LINE(5845)
		pre = cur;
		HX_STACK_LINE(5846)
		cur = cur->next;
	}
	HX_STACK_LINE(5848)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_CutInt ZNPList_ZPP_CutInt_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_CutInt pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","erase",0x81e9c4fa,"zpp_nape.util.ZNPList_ZPP_CutInt.erase","zpp_nape/util/Lists.hx",5851,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(5851)
	::zpp_nape::util::ZNPNode_ZPP_CutInt old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(5851)
	::zpp_nape::util::ZNPNode_ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5851)
	if (((pre == null()))){
		HX_STACK_LINE(5851)
		old = this->head;
		HX_STACK_LINE(5851)
		ret = old->next;
		HX_STACK_LINE(5851)
		this->head = ret;
		HX_STACK_LINE(5851)
		if (((this->head == null()))){
			HX_STACK_LINE(5851)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(5851)
		old = pre->next;
		HX_STACK_LINE(5851)
		ret = old->next;
		HX_STACK_LINE(5851)
		pre->next = ret;
		HX_STACK_LINE(5851)
		if (((ret == null()))){
			HX_STACK_LINE(5851)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(5851)
	{
		HX_STACK_LINE(5851)
		::zpp_nape::util::ZNPNode_ZPP_CutInt o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(5851)
		o->elt = null();
		HX_STACK_LINE(5851)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
		HX_STACK_LINE(5851)
		::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
	}
	HX_STACK_LINE(5851)
	this->modified = true;
	HX_STACK_LINE(5851)
	(this->length)--;
	HX_STACK_LINE(5851)
	this->pushmod = true;
	HX_STACK_LINE(5851)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_CutInt ZNPList_ZPP_CutInt_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_CutInt pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","inlined_erase",0xa682c666,"zpp_nape.util.ZNPList_ZPP_CutInt.inlined_erase","zpp_nape/util/Lists.hx",5855,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(5864)
	::zpp_nape::util::ZNPNode_ZPP_CutInt old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(5865)
	::zpp_nape::util::ZNPNode_ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5866)
	if (((pre == null()))){
		HX_STACK_LINE(5867)
		old = this->head;
		HX_STACK_LINE(5868)
		ret = old->next;
		HX_STACK_LINE(5869)
		this->head = ret;
		HX_STACK_LINE(5870)
		if (((this->head == null()))){
			HX_STACK_LINE(5870)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(5873)
		old = pre->next;
		HX_STACK_LINE(5874)
		ret = old->next;
		HX_STACK_LINE(5875)
		pre->next = ret;
		HX_STACK_LINE(5876)
		if (((ret == null()))){
			HX_STACK_LINE(5876)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(5879)
	{
		HX_STACK_LINE(5880)
		::zpp_nape::util::ZNPNode_ZPP_CutInt o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(5889)
		o->elt = null();
		HX_STACK_LINE(5890)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
		HX_STACK_LINE(5891)
		::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
	}
	HX_STACK_LINE(5896)
	this->modified = true;
	HX_STACK_LINE(5897)
	(this->length)--;
	HX_STACK_LINE(5898)
	this->pushmod = true;
	HX_STACK_LINE(5899)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_CutInt ZNPList_ZPP_CutInt_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_CutInt pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","splice",0xa4123ae8,"zpp_nape.util.ZNPList_ZPP_CutInt.splice","zpp_nape/util/Lists.hx",5901,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(5902)
	while((true)){
		HX_STACK_LINE(5902)
		int _g = (n)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(5902)
		if ((!(((  (((_g > (int)0))) ? bool((pre->next != null())) : bool(false) ))))){
			HX_STACK_LINE(5902)
			break;
		}
		HX_STACK_LINE(5902)
		this->erase(pre);
	}
	HX_STACK_LINE(5903)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CutInt_obj,splice,return )

Void ZNPList_ZPP_CutInt_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","clear",0x57284da1,"zpp_nape.util.ZNPList_ZPP_CutInt.clear","zpp_nape/util/Lists.hx",5906,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5906)
		while((true)){
			HX_STACK_LINE(5906)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(5906)
				break;
			}
			HX_STACK_LINE(5906)
			::zpp_nape::util::ZNPNode_ZPP_CutInt ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5906)
			this->head = ret->next;
			HX_STACK_LINE(5906)
			{
				HX_STACK_LINE(5906)
				::zpp_nape::util::ZNPNode_ZPP_CutInt o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(5906)
				o->elt = null();
				HX_STACK_LINE(5906)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
				HX_STACK_LINE(5906)
				::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
			}
			HX_STACK_LINE(5906)
			if (((this->head == null()))){
				HX_STACK_LINE(5906)
				this->pushmod = true;
			}
			HX_STACK_LINE(5906)
			this->modified = true;
			HX_STACK_LINE(5906)
			(this->length)--;
		}
		HX_STACK_LINE(5906)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,clear,(void))

Void ZNPList_ZPP_CutInt_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","inlined_clear",0x7bc14f0d,"zpp_nape.util.ZNPList_ZPP_CutInt.inlined_clear","zpp_nape/util/Lists.hx",5911,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5912)
		while((true)){
			HX_STACK_LINE(5912)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(5912)
				break;
			}
			HX_STACK_LINE(5912)
			::zpp_nape::util::ZNPNode_ZPP_CutInt ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5912)
			this->head = ret->next;
			HX_STACK_LINE(5912)
			{
				HX_STACK_LINE(5912)
				::zpp_nape::util::ZNPNode_ZPP_CutInt o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(5912)
				o->elt = null();
				HX_STACK_LINE(5912)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
				HX_STACK_LINE(5912)
				::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
			}
			HX_STACK_LINE(5912)
			if (((this->head == null()))){
				HX_STACK_LINE(5912)
				this->pushmod = true;
			}
			HX_STACK_LINE(5912)
			this->modified = true;
			HX_STACK_LINE(5912)
			(this->length)--;
		}
		HX_STACK_LINE(5913)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,inlined_clear,(void))

Void ZNPList_ZPP_CutInt_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","reverse",0x1bc74236,"zpp_nape.util.ZNPList_ZPP_CutInt.reverse","zpp_nape/util/Lists.hx",5916,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5917)
		::zpp_nape::util::ZNPNode_ZPP_CutInt cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(5918)
		::zpp_nape::util::ZNPNode_ZPP_CutInt pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(5919)
		while((true)){
			HX_STACK_LINE(5919)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(5919)
				break;
			}
			HX_STACK_LINE(5920)
			::zpp_nape::util::ZNPNode_ZPP_CutInt nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(5921)
			cur->next = pre;
			HX_STACK_LINE(5922)
			this->head = cur;
			HX_STACK_LINE(5923)
			pre = cur;
			HX_STACK_LINE(5924)
			cur = nx;
		}
		HX_STACK_LINE(5926)
		this->modified = true;
		HX_STACK_LINE(5927)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,reverse,(void))

bool ZNPList_ZPP_CutInt_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","empty",0x7ea716a1,"zpp_nape.util.ZNPList_ZPP_CutInt.empty","zpp_nape/util/Lists.hx",5932,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5932)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,empty,return )

int ZNPList_ZPP_CutInt_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","size",0x7120e32d,"zpp_nape.util.ZNPList_ZPP_CutInt.size","zpp_nape/util/Lists.hx",5937,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5937)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,size,return )

bool ZNPList_ZPP_CutInt_obj::has( ::zpp_nape::geom::ZPP_CutInt obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","has",0x2af32e6e,"zpp_nape.util.ZNPList_ZPP_CutInt.has","zpp_nape/util/Lists.hx",5940,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5940)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5940)
	{
		HX_STACK_LINE(5940)
		ret = false;
		HX_STACK_LINE(5940)
		{
			HX_STACK_LINE(5940)
			::zpp_nape::util::ZNPNode_ZPP_CutInt cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(5940)
			while((true)){
				HX_STACK_LINE(5940)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(5940)
					break;
				}
				HX_STACK_LINE(5940)
				::zpp_nape::geom::ZPP_CutInt npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(5940)
				if (((npite == obj))){
					HX_STACK_LINE(5940)
					ret = true;
					HX_STACK_LINE(5940)
					break;
				}
				HX_STACK_LINE(5940)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(5940)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,has,return )

bool ZNPList_ZPP_CutInt_obj::inlined_has( ::zpp_nape::geom::ZPP_CutInt obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","inlined_has",0xe3babcda,"zpp_nape.util.ZNPList_ZPP_CutInt.inlined_has","zpp_nape/util/Lists.hx",5944,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5953)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5954)
	{
		HX_STACK_LINE(5955)
		ret = false;
		HX_STACK_LINE(5956)
		{
			HX_STACK_LINE(5957)
			::zpp_nape::util::ZNPNode_ZPP_CutInt cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(5958)
			while((true)){
				HX_STACK_LINE(5958)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(5958)
					break;
				}
				HX_STACK_LINE(5959)
				::zpp_nape::geom::ZPP_CutInt npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(5961)
				if (((npite == obj))){
					HX_STACK_LINE(5962)
					ret = true;
					HX_STACK_LINE(5963)
					break;
				}
				HX_STACK_LINE(5966)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(5970)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,inlined_has,return )

::zpp_nape::geom::ZPP_CutInt ZNPList_ZPP_CutInt_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","front",0x155af4bd,"zpp_nape.util.ZNPList_ZPP_CutInt.front","zpp_nape/util/Lists.hx",5975,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5975)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,front,return )

::zpp_nape::geom::ZPP_CutInt ZNPList_ZPP_CutInt_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","back",0x65de1c93,"zpp_nape.util.ZNPList_ZPP_CutInt.back","zpp_nape/util/Lists.hx",5977,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5978)
	::zpp_nape::util::ZNPNode_ZPP_CutInt ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5979)
	::zpp_nape::util::ZNPNode_ZPP_CutInt cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5980)
	while((true)){
		HX_STACK_LINE(5980)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(5980)
			break;
		}
		HX_STACK_LINE(5981)
		ret = cur;
		HX_STACK_LINE(5982)
		cur = cur->next;
	}
	HX_STACK_LINE(5984)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_CutInt ZNPList_ZPP_CutInt_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","iterator_at",0xe859acf8,"zpp_nape.util.ZNPList_ZPP_CutInt.iterator_at","zpp_nape/util/Lists.hx",5986,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(5995)
	::zpp_nape::util::ZNPNode_ZPP_CutInt ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5996)
	while((true)){
		HX_STACK_LINE(5996)
		int _g = (ind)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(5996)
		if ((!(((  (((_g > (int)0))) ? bool((ret != null())) : bool(false) ))))){
			HX_STACK_LINE(5996)
			break;
		}
		HX_STACK_LINE(5996)
		ret = ret->next;
	}
	HX_STACK_LINE(5997)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,iterator_at,return )

::zpp_nape::geom::ZPP_CutInt ZNPList_ZPP_CutInt_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","at",0x97b9e45f,"zpp_nape.util.ZNPList_ZPP_CutInt.at","zpp_nape/util/Lists.hx",5999,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(6008)
	::zpp_nape::util::ZNPNode_ZPP_CutInt it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(6009)
	if (((it != null()))){
		HX_STACK_LINE(6009)
		return it->elt;
	}
	else{
		HX_STACK_LINE(6009)
		return null();
	}
	HX_STACK_LINE(6009)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,at,return )


ZNPList_ZPP_CutInt_obj::ZNPList_ZPP_CutInt_obj()
{
}

void ZNPList_ZPP_CutInt_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_CutInt);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_CutInt_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_CutInt_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { return head; }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"addAll") ) { return addAll_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pop_unsafe") ) { return pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"try_remove") ) { return try_remove_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inlined_add") ) { return inlined_add_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop") ) { return inlined_pop_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_has") ) { return inlined_has_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator_at") ) { return iterator_at_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inlined_erase") ) { return inlined_erase_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_clear") ) { return inlined_clear_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inlined_insert") ) { return inlined_insert_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_remove") ) { return inlined_remove_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inlined_pop_unsafe") ) { return inlined_pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_try_remove") ) { return inlined_try_remove_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZNPList_ZPP_CutInt_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_CutInt >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPList_ZPP_CutInt_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("head"));
	outFields->push(HX_CSTRING("modified"));
	outFields->push(HX_CSTRING("pushmod"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_CutInt*/ ,(int)offsetof(ZNPList_ZPP_CutInt_obj,head),HX_CSTRING("head")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_CutInt_obj,modified),HX_CSTRING("modified")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_CutInt_obj,pushmod),HX_CSTRING("pushmod")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_CutInt_obj,length),HX_CSTRING("length")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("head"),
	HX_CSTRING("begin"),
	HX_CSTRING("modified"),
	HX_CSTRING("pushmod"),
	HX_CSTRING("length"),
	HX_CSTRING("setbegin"),
	HX_CSTRING("add"),
	HX_CSTRING("inlined_add"),
	HX_CSTRING("addAll"),
	HX_CSTRING("insert"),
	HX_CSTRING("inlined_insert"),
	HX_CSTRING("pop"),
	HX_CSTRING("inlined_pop"),
	HX_CSTRING("pop_unsafe"),
	HX_CSTRING("inlined_pop_unsafe"),
	HX_CSTRING("remove"),
	HX_CSTRING("try_remove"),
	HX_CSTRING("inlined_remove"),
	HX_CSTRING("inlined_try_remove"),
	HX_CSTRING("erase"),
	HX_CSTRING("inlined_erase"),
	HX_CSTRING("splice"),
	HX_CSTRING("clear"),
	HX_CSTRING("inlined_clear"),
	HX_CSTRING("reverse"),
	HX_CSTRING("empty"),
	HX_CSTRING("size"),
	HX_CSTRING("has"),
	HX_CSTRING("inlined_has"),
	HX_CSTRING("front"),
	HX_CSTRING("back"),
	HX_CSTRING("iterator_at"),
	HX_CSTRING("at"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_CutInt_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_CutInt_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_CutInt_obj::__mClass;

void ZNPList_ZPP_CutInt_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_CutInt"), hx::TCanCast< ZNPList_ZPP_CutInt_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void ZNPList_ZPP_CutInt_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
