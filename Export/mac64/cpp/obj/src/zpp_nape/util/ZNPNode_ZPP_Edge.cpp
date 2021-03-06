#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPNode_ZPP_Edge_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Edge","new",0xd85d27c0,"zpp_nape.util.ZNPNode_ZPP_Edge.new","zpp_nape/util/Lists.hx",15760,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15794)
	this->elt = null();
	HX_STACK_LINE(15785)
	this->next = null();
}
;
	return null();
}

//ZNPNode_ZPP_Edge_obj::~ZNPNode_ZPP_Edge_obj() { }

Dynamic ZNPNode_ZPP_Edge_obj::__CreateEmpty() { return  new ZNPNode_ZPP_Edge_obj; }
hx::ObjectPtr< ZNPNode_ZPP_Edge_obj > ZNPNode_ZPP_Edge_obj::__new()
{  hx::ObjectPtr< ZNPNode_ZPP_Edge_obj > result = new ZNPNode_ZPP_Edge_obj();
	result->__construct();
	return result;}

Dynamic ZNPNode_ZPP_Edge_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPNode_ZPP_Edge_obj > result = new ZNPNode_ZPP_Edge_obj();
	result->__construct();
	return result;}

Void ZNPNode_ZPP_Edge_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Edge","alloc",0x102993d5,"zpp_nape.util.ZNPNode_ZPP_Edge.alloc","zpp_nape/util/Lists.hx",15788,0x9f4e6754)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Edge_obj,alloc,(void))

Void ZNPNode_ZPP_Edge_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Edge","free",0x73e5b94c,"zpp_nape.util.ZNPNode_ZPP_Edge.free","zpp_nape/util/Lists.hx",15792,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(15792)
		this->elt = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Edge_obj,free,(void))

::zpp_nape::shape::ZPP_Edge ZNPNode_ZPP_Edge_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Edge","elem",0x7337f52f,"zpp_nape.util.ZNPNode_ZPP_Edge.elem","zpp_nape/util/Lists.hx",15799,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(15799)
	return this->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Edge_obj,elem,return )

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPNode_ZPP_Edge_obj::zpp_pool;


ZNPNode_ZPP_Edge_obj::ZNPNode_ZPP_Edge_obj()
{
}

void ZNPNode_ZPP_Edge_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPNode_ZPP_Edge);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_END_CLASS();
}

void ZNPNode_ZPP_Edge_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(elt,"elt");
}

Dynamic ZNPNode_ZPP_Edge_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { return elt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"elem") ) { return elem_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZNPNode_ZPP_Edge_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast< ::zpp_nape::shape::ZPP_Edge >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Edge >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Edge >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPNode_ZPP_Edge_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("elt"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Edge*/ ,(int)offsetof(ZNPNode_ZPP_Edge_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Edge*/ ,(int)offsetof(ZNPNode_ZPP_Edge_obj,elt),HX_CSTRING("elt")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("next"),
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("elt"),
	HX_CSTRING("elem"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_Edge_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_Edge_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_Edge_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_Edge_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZNPNode_ZPP_Edge_obj::__mClass;

void ZNPNode_ZPP_Edge_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPNode_ZPP_Edge"), hx::TCanCast< ZNPNode_ZPP_Edge_obj> ,sStaticFields,sMemberFields,
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

void ZNPNode_ZPP_Edge_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
