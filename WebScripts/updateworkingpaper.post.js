model.name = args.testname;

var found_node = search.findNode("workspace://SpacesStore/" + args.uuid);

//if (args.docname != '') {
  //found_node.properties['cm:name'] = args.docname;
//}
found_node.properties['cm:title'] = args.title;
found_node.properties['cm:description'] =args.description;
found_node.properties['cm:author'] = args.author;
found_node.properties['gsb:cwoPublicationYear'] = args.cwoPublicationYear;
found_node.properties['gsb:cwoAcademicArea'] = args.cwoAcademicArea;
found_node.properties['gsb:cwoBusinessTopics'] = args.cwoBusinessTopics;
found_node.properties['gsb:cwoItemId'] =  args.cwoItemId;
found_node.properties['gsb:cwoProductType'] = args.cwoProductType;
found_node.properties['gsb:authorsSunetId'] = args.authorsSunetId;

found_node.save();
