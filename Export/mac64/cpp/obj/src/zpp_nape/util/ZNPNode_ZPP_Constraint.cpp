#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPNode_ZPP_Constraint_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Constraint","new",0xdd42d2a0,"zpp_nape.util.ZNPNode_ZPP_Constraint.new","zpp_nape/util/Lists.hx",14943,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14977)
	this->elt = null();
	HX_STACK_LINE(14968)
	this->next = null();
}
;
	return null();
}

//ZNPNode_ZPP_Constraint_obj::~ZNPNode_ZPP_Constraint_obj() { }

Dynamic ZNPNode_ZPP_Constraint_obj::__CreateEmpty() { return  new ZNPNode_ZPP_Constraint_obj; }
hx::ObjectPtr< ZNPNode_ZPP_Constraint_obj > ZNPNode_ZPP_Constraint_obj::__new()
{  hx::ObjectPtr< ZNPNode_ZPP_Constraint_obj > result = new ZNPNode_ZPP_Constraint_obj();
	result->__construct();
	return result;}

Dynamic ZNPNode_ZPP_Constraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPNode_ZPP_Constraint_obj > result = new ZNPNode_ZPP_Constraint_obj();
	result->__construct();
	return result;}

Void ZNPNode_ZPP_Constraint_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Constraint","alloc",0x59f7b6b5,"zpp_nape.util.ZNPNode_ZPP_Constraint.alloc","zpp_nape/util/Lists.hx",14971,0x9f4e6754)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Constraint_obj,alloc,(void))

Void ZNPNode_ZPP_Constraint_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Constraint","free",0xb7f5926c,"zpp_nape.util.ZNPNode_ZPP_Constraint.free","zpp_nape/util/Lists.hx",14975,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14975)
		this->elt = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Constraint_obj,free,(void))

::zpp_nape::constraint::ZPP_Constraint ZNPNode_ZPP_Constraint_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Constraint","elem",0xb747ce4f,"zpp_nape.util.ZNPNode_ZPP_Constraint.elem","zpp_nape/util/Lists.hx",14982,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14982)
	return this->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Constraint_obj,elem,return )

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPNode_ZPP_Constraint_obj::zpp_pool;


ZNPNode_ZPP_Constraint_obj::ZNPNode_ZPP_Constraint_obj()
{
}

void ZNPNode_ZPP_Constraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPNode_ZPP_Constraint);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_END_CLASS();
}

void ZNPNode_ZPP_Constraint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(elt,"elt");
}

Dynamic ZNPNode_ZPP_Constraint_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPNode_ZPP_Constraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast< ::zpp_nape::constraint::ZPP_Constraint >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Constraint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Constraint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPNode_ZPP_Constraint_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Constraint*/ ,(int)offsetof(ZNPNode_ZPP_Constraint_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*::zpp_nape::constraint::ZPP_Constraint*/ ,(int)offsetof(ZNPNode_ZPP_Constraint_obj,elt),HX_CSTRING("elt")},
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
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_Constraint_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_Constraint_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_Constraint_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_Constraint_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZNPNode_ZPP_Constraint_obj::__mClass;

void ZNPNode_ZPP_Constraint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPNode_ZPP_Constraint"), hx::TCanCast< ZNPNode_ZPP_Constraint_obj> ,sStaticFields,sMemberFields,
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

void ZNPNode_ZPP_Constraint_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
