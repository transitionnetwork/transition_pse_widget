transition_pse_widget
=====================

Feature
Sets up important assets and configuration for the Project Sharing Engine (PSE):
* Content type: project_pse = "PSE Project Submission"
* Page manager view: A node view for above content type
* Rules of category "PSE": Sending emails and setting roles mainly
* Role: "Widget Owner" - basic admin capabilities (with perms 'get widget code' and 'view submissions in moderation' set)
* Role: "Widget User" - for users who register via widget
* Strongarm: Settings for project_pse content type, path aliases etc
* View: transition_pse_projects_admin ('site administrator' views) - lists all submissions
* View: transition_pse_widget ('widget owner' views) - lists submissions for user, shows accepted projects